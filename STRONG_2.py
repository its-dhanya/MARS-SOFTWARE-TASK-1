rom PIL import Image


image = Image.open("image.jpg")


threshold = (160, 160, 160)


count_typeA = 0
count_typeB = 0


brightness_sum = 0


width, height = image.size


for y in range(height):
    for x in range(width):
       
        r, g, b = image.getpixel((x, y))
        
      
        if r > threshold[0] and g > threshold[1] and b > threshold[2]:
            count_typeA += 1
        else:
            count_typeB += 1
        
      
        brightness = (0.21 * r + 0.72 * g + 0.07 * b) / 3
        brightness_sum += brightness
        
        
        if brightness > 127:
            image.putpixel((x, y), (255, 255, 255))  # White
        else:
            image.putpixel((x, y), (0, 0, 0))  # Black


total_pixels = width * height
percentage_typeA = (count_typeA / total_pixels) * 100
percentage_typeB = (count_typeB / total_pixels) * 100

print(f"Percentage of typeA pixels: {percentage_typeA:.2f}%")
print(f"Percentage of typeB pixels: {percentage_typeB:.2f}%")


image.show()
