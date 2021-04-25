if __name__ == "__main__":
    input = list(input().split(" "))
    problems = int(input[0])
    minutes_to_party = int(input[1])
    minutes_to_solve_problems = 240 - minutes_to_party # 240 minutes = 4 hours
    problems_solved = 0
    for problem in range(problems):
        minutes_to_solve_problems = minutes_to_solve_problems - (problem + 1) * 5
        if minutes_to_solve_problems >= 0:
            problems_solved = problems_solved + 1
    print(problems_solved)
