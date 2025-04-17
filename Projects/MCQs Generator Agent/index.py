from google import genai
import requests
from bs4 import BeautifulSoup
import os
from dotenv import load_dotenv
load_dotenv()

api_key = os.getenv("GOOGLE_GEMINI_API")
client = genai.Client(api_key=api_key)

url = input("Enter a URL to fetch data: ")

try:
    response = requests.get(url, timeout=10)
    html_content = response.text

    # print(html_content)
    soup = BeautifulSoup(html_content, 'html.parser')
    text_content = ' '.join([p.get_text() for p in soup.find_all('p')])

    # print(text_content)
except requests.exceptions.RequestException as e:
    print(f"Error fetching URL: {e}")
except Exception as e:
    print(f"Error parsing HTML: {e}")

response = client.models.generate_content(
    model="gemini-2.0-flash", contents=f"get 20 mcqs form this: {text_content}"
)
print(response.text)
