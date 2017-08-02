require_relative '../algorithms/535_Encode_and_Decode_TinyURL/tiny_url.rb'

describe 'tiny_url' do
  it 'encodes' do
    decoded_url = 'https://leetcode.com/problems/design-tinyurl'
    expected_url = 'https://tinyurl.com/aHR0cHM6Ly9sZWV0Y29kZS5jb20vcHJvYmxlbXMvZGVzaWduLXRpbnl1cmw='
    expect(encode(decoded_url)).to eq expected_url
  end

  it 'decodes' do
    encoded_url = 'https://tinyurl.com/aHR0cHM6Ly9sZWV0Y29kZS5jb20vcHJvYmxlbXMvZGVzaWduLXRpbnl1cmw='
    expected_url = 'https://leetcode.com/problems/design-tinyurl'
    expect(decode(encoded_url)).to eq expected_url
  end
end
