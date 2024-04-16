def decimal_to_any_base(decimal_num, base):
    if base < 2 or base > 16:
        return "Noto'g'ri sanoq sistema"

    hex_chars = "0123456789ABCDEF"
    result_num = ""
    while decimal_num > 0:
        remainder = decimal_num % base
        result_num = hex_chars[remainder] + result_num
        decimal_num //= base
    return result_num


decimal_number = int(input())
base = int(input())
if(decimal_to_any_base(decimal_number, base)==""):
    print(0)
else:
    print(decimal_to_any_base(decimal_number, base))
