import sys

def palabra(n: int, texto: str) -> str:
    palabras = texto.split()
    res = []
    for p in palabras:
        if len(p) > n:
            format = p[::-1].upper()
            res.append(format)
        else:
            res.append(p)
    return ' '.join(res)


if __name__ == "__main__":
    n = int(sys.argv[1])
    texto = sys.argv[2]
    print(palabra(n, texto))
