from math import sqrt,acos,pi
class vector:
    def __init__(self,x,y,z):
        self.x=float(x)
        self.y=float(y)
        self.z=float(z)
        
    def dot(self,n):
        x1=self.x;y1=self.y;z1=self.z;
        x1*=n.x
        y1*=n.y
        z1*=n.z
        return x1+y1+z1
    def cross(self,n):
        x1=self.x;y1=self.y;z1=self.z;
        x2=n.x ;y2=n.y ;z2=n.z;
        x3 = (y1*z2)-(z1*y2)
        y3 = (z1*x2)-(z2*x1)
        z3 = (x1*y2)-(x2*y1)
        return vector(x3,y3,z3)
    def __mul__(self,n):
        x1=self.x;y1=self.y;z1=self.z;
        x1*=n
        y1*=n
        z1*=n
        return vector(x1,y1,z1)
    def div(self,n):
        x1=self.x;y1=self.y;z1=self.z;
        x1/=n
        y1/=n
        z1/=n
        return vector(x1,y1,z1)
    def __sub__(self,n):
        x1=self.x;y1=self.y;z1=self.z;
        x1-=n.x
        y1-=n.y
        z1-=n.z
        return vector(x1,y1,z1)
    def __add__(self,n):
        x1=self.x;y1=self.y;z1=self.z;
        x1+=n.x
        y1+=n.y
        z1+=n.z
        return vector(x1,y1,z1)
    def mod(self):
        return sqrt((self.x ** 2)+(self.y ** 2)+(self.z ** 2))
    def line(self,n):
        return n.__sub__(self)
    
A=[float(x) for x in raw_input().strip().split(' ')]
A=vector(A[0],A[1],A[2])
B=[float(x) for x in raw_input().strip().split(' ')]
B=vector(B[0],B[1],B[2])
C=[float(x) for x in raw_input().strip().split(' ')]
C=vector(C[0],C[1],C[2])
D=[float(x) for x in raw_input().strip().split(' ')]
D=vector(D[0],D[1],D[2])
AB=A.line(B)
BC=B.line(C)
CD=C.line(D)
X=AB.cross(BC)
Y=BC.cross(CD)
cos_phi=(X.dot(Y))/(X.mod()*Y.mod())
phi=(acos(cos_phi)/pi)*180
print "%.2f"%phi




