from math import sqrt
class comp:
    """complex number class"""
    def __init__(self , real ,imaginary):
        self.real=float(real)
        self.imaginary=float(imaginary)
    def __add__(self,n):
        holder_real=self.real + n.real
        holder_imaginary=self.imaginary + n.imaginary
        return  comp(holder_real ,holder_imaginary)
    def __sub__(self,n):
        holder_real=self.real - n.real
        holder_imaginary=self.imaginary - n.imaginary
        return  comp(holder_real ,holder_imaginary)
    def __mul__(self,n):
        holder_real = self.real * n.real
        holder_real -= (self.imaginary*n.imaginary)
        holder_imaginary = (self.real*n.imaginary)+(self.imaginary*n.real)
        return  comp(holder_real ,holder_imaginary)
    def __truediv__(self,n):
        r = comp(n.real , (-1*n.imaginary))
        holder1 = self.__mul__(r)
        holder2=n*r
        holder_real = holder1.real / holder2.real
        holder_imaginary = holder1.imaginary / holder2.real
        return  comp(holder_real ,holder_imaginary)
    def mod(self):
        return sqrt((self.real ** 2)+(self.imaginary ** 2))
    def printc(self):
        holder_real=self.real
        holder_imaginary = self.imaginary
        if self.imaginary < 0 and self.real != 0:
            holder_imaginary /= -1
            print "%.2f - %.2fi" % (holder_real,holder_imaginary)
        elif self.imaginary > 0 and self.real != 0:
            print "%.2f + %.2fi" % (holder_real,holder_imaginary)
        elif self.imaginary == 0 and self.real != 0:
            print "%.2f" % (holder_real)
        elif self.imaginary != 0 and self.real == 0:
            print "%.2fi" % (holder_imaginary)
        elif self.imaginary == 0 and self.real == 0:
            print "0.00"

r1,i1=tuple([float(x) for x in raw_input().strip().split(' ')])
r2,i2=tuple([float(x) for x in raw_input().strip().split(' ')])
c1=comp(r1,i1)
c2=comp(r2,i2)
cadd=c1+c2
cadd.printc()
csub=c1-c2
csub.printc()
cmul=c1*c2
cmul.printc()
cdiv=c1.__truediv__(c2)
cdiv.printc()
print "%.2f"%c1.mod()
print "%.2f"%c2.mod()