from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

from glob import glob
from copy import copy

# flat an arbitrarily nested list
def flat(x):
    l = copy(x)
    while l:
        while l and isinstance(l[0], list):
            l[0:1] = l[0]
        if l: yield l.pop(0)


extra_objects=\
[o for o in map(glob,["c-helpers/*.o",'LiE/*.o','LiE/static/*.o','LiE/box/*.o'])]

setup(
    cmdclass = {'build_ext': build_ext},
    ext_modules = [
        Extension("lie", ["lie.pyx"],
            extra_objects=[o for o in flat(extra_objects)],
            include_dirs=['LiE','LiE/box'],
            libraries=['readline'],
            #extra_compile_args=['-shared', '-pthread','-fPIC','-fwrapv'
            extra_compile_args=['-shared','-fPIC','-fwrapv',
                #'-O2','-Wall'])]
                '-O2','-Wall','-fno-strict-aliasing'])]
)

