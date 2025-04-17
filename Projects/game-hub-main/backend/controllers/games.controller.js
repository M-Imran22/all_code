const { Op, where } = require("sequelize");
const db = require("../models");

exports.createNewGame = async (req, res) => {
  try {
    const {
      gameName,
      platform,
      genre,
      publisherName,
      releaseDate,
      price,
      salePrice,
      gameDescription,
    } = req.body;

    const gameImage = req.files["gameImage"]
      ? req.files["gameImage"][0].filename
      : null;
    const screenshots = req.files["screenshots"]
      ? req.files["screenshots"].map((file) => file.filename)
      : [];

    const newGame = await db.Game.create({
      gameName,
      gameImage,
      publisherName,
      releaseDate,
      price,
      salePrice,
      gameDescription,
    });

    // Saving screenshots
    for (let screenShot of screenshots) {
      await db.GameScreenShots.create({
        screenShot,
        gameID: newGame.id,
      });
    }

    // Saving platforms
    const platformsArray = JSON.parse(platform);
    for (let slug of platformsArray) {
      await db.Platform.create({
        slug,
        gameID: newGame.id,
      });
    }

    // Saving genres
    const genreArray = JSON.parse(genre);
    for (let genreItem of genreArray) {
      await db.Genre.create({
        genreName: genreItem.name,
        slug: genreItem.slug,
        gameID: newGame.id,
      });
    }
    
    res.status(200).send("Game info saved successfully");
  } catch (error) {
    console.error("Error saving game info:", error);
    res.status(500).json({ error: error.message });
  }
};

exports.getAllGames = async (req, res) => {
  const { search, page = 1, limit = 10 } = req.query;
  const offset = (page - 1) * limit;
  try {
    const whereConditions = {};
    if (search) {
      whereConditions.gameName = {
        [Op.like]: `%${search}%`,
      };
    }

    const { count, rows: games } = await db.Game.findAndCountAll({
      where: whereConditions,

      include: [
        {
          model: db.Platform,
          as: "platforms",
        },
        {
          model: db.Genre,
          as: "genres",
        },
      ],

      offset,
      limit: parseInt(limit, 10),
    });
    res.status(200).json({
      total: count,
      pages: Math.ceil(count / limit),
      currentPage: parseInt(page, 10),
      games,
    });
  } catch (error) {
    res.status(500).json({ error: "Failed to fetch games" });
  }
};

exports.getAllGenres = async (req, res) => {
  try {
    const genres = await db.Genre.findAll({
      attributes: ["id", "slug", "gameID"],
      group: ["genreName"],
    });
    res.status(200).json(genres);
  } catch (err) {
    res.status(500).json(err);
  }
};

exports.getAllPlatforms = async (req, res) => {
  try {
    const platforms = await db.Platform.findAll({
      group: ["slug"],
    });
    res.status(200).json(platforms);
  } catch (error) {
    res.status(500).json({ error: error.message });
  }
};
