if __name__ == "__main__":
    contests = int(input())
    scores = list(map(int, input().split(" ")))
    min_score = scores[0]
    max_score = scores[0]
    performances = 0
    if contests > 1:
        for score in scores:
            if score < min_score:
                performances = performances + 1
                min_score = score

            if score > max_score:
                performances = performances + 1
                max_score = score
    print(performances)