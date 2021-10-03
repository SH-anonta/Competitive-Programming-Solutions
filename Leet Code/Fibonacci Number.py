class Solution:
    def fib(self, n: int) -> int:
        if n == 0:
            return 0
        if n == 1:
            return 1

        n -= 1

        m = [1, 1, 1, 0]

        prod = self.do_expo(m, n)
        return prod[0]

    def do_expo(self, m, p):
        if p == 1:
            return m

        mh = self.do_expo(m, p // 2)
        if p % 2 == 0:
            return self.square_matrix(mh)
        else:
            return self.cross_multiply(m, self.square_matrix(mh))

    def square_matrix(self, m):
        a, b, c, d = m

        return [a * a + b * c, a * b + b * d, c * a + d * c, c * b + d * d]

    def cross_multiply(self, matrix_a, matrix_b):
        a, b, c, d = matrix_a
        w, x, y, z = matrix_b

        return [a * w + b * y, a * x + b * z, c * w + d * y, c * x + d * z]
