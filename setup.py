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
      "amaranth~=0.3",
      "amaranth-boards @ git+https://github.com/amaranth-lang/amaranth-boards.git@8e2615765e255144403431ca95c5cdf6c78eb638#egg=amaranth_boards",
      "amaranth-soc @ git+https://github.com/amaranth-lang/amaranth-soc.git@217d4ea76ad3b3bbf146980d168bc7b3b9d95a18#egg=amaranth_soc",
      "amaranth-stdio @ git+https://github.com/amaranth-lang/amaranth-stdio.git@ae74f176b6ca32b24ab08325159a19318711a5a9#egg=amaranth_stdio",
   ],
)
