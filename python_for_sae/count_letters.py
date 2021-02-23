def count_letter(text, character):
    count = text.lower().count(character.lower())
    print(count)
    return count

sentance = 'PHP, Python or Pearl?'
letter = 'p'

count_letter(sentance, letter)