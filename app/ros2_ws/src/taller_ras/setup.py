from setuptools import find_packages, setup

package_name = 'taller_ras'

setup(
    name=package_name,
    version='1.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='miguel',
    maintainer_email='miguelgonrod2004@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'publicador = taller_ras.publicador:main',
            'suscriptor = taller_ras.suscriptor:main'
        ],
    },
)
