from setuptools import setup, find_packages

setup(
   name='riscv_tilelink',
   version='0.1.0',
   description='RISC-V Core with Tilelink peripherals',
   author='Michiel Visser',
   author_email='opensource@webmichiel.nl',
   setup_requires=["setuptools"],
   packages=find_packages(),
   install_requires=['nmigen', 'nmigen_soc', 'nmigen_stdio'],
)
