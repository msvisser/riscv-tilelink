from setuptools import setup, find_packages

setup(
   name='riscv_tilelink',
   version='0.1.0',
   description='RISC-V Core with Tilelink peripherals',
   author='Michiel Visser',
   author_email='opensource@webmichiel.nl',
   setup_requires=["setuptools"],
   packages=find_packages(),
   install_requires=[
      "nmigen @ git+https://github.com/nmigen/nmigen.git@0b28a97ca00b44301fb35e2426d571e4f6640040#egg=nmigen",
      "nmigen-boards @ git+https://github.com/nmigen/nmigen-boards.git@bd7fdd379d8b28f8b542f251a11ca28297e8fd6f#egg=nmigen_boards",
      "nmigen-soc @ git+https://github.com/nmigen/nmigen-soc.git@d0e6c70a8802ec2263e9229a20d0ae40c7702441#egg=nmigen_soc",
      "nmigen-stdio @ git+https://github.com/nmigen/nmigen-stdio.git@9e222b9bff02891efe372ee81c06c3917ceb23f9#egg=nmigen_stdio",
   ],
)
