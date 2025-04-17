class ExpressError extends Error {
  constructor(status, massege) {
    super();
    this.message = massege;
    this.status = status;
  }
}

module.exports = ExpressError;
