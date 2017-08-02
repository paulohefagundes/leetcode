require "base64"

URL_PREFIX = 'https://tinyurl.com/'

# Encodes a URL to a shortened URL.
#
# @param {string} longUrl
# @return {string}
def encode(longUrl)
  URL_PREFIX + Base64.encode64(longUrl).strip
end

# Decodes a shortened URL to its original URL.
#
# @param {string} shortUrl
# @return {string}
def decode(shortUrl)
  url = shortUrl.split(URL_PREFIX)
  raise 'invalid url' unless url.size > 1
  Base64.decode64(url[1])
end
