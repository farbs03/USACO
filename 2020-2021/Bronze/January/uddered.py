alphabet = input()
word = input()
letters = {}
cnt = 0
for char in alphabet:
    letters[char] = cnt
    cnt += 1
heard = 1
for i in range(len(word) - 1):
    ch1 = word[i]
    ch2 = word[i + 1]
    if not letters[ch2] > letters[ch1] or ch1 == ch2:
        heard += 1

print(heard)