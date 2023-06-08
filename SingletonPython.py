#Код написал(а): James Flanders
class Singleton(type):

    def __init__(cls, name, bases, attrs, **kwargs):
        super().__init__(name, bases, attrs)
        cls._instance = None

    def __call__(cls, *args, **kwargs):
        if cls._instance is None:
            cls._instance = super().__call__(*args, **kwargs)
        return cls._instance


class Logger(metaclass=Singleton):
    #Пример класса
    pass

l1 = Logger()
l2 = Logger()
print(l1 is l2)
