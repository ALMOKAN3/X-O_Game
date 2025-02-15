/*
#include <لتضمين المكتبات>
(function) المكتبات تحوي على عدة أوامر
أنواع المتغيرات في السي:
  1-(char) = 1 bytes للأحرف و الرموز
  2-(bool) = 1 bytes نعم أو لا
  3-(int) = 4 bytes للأعداد الصحيحة القصيرة
  4-(float) = 4 bytes للأعداد العشرية القصيرة
  5-(double) = 8 bytes للأعداد العشرية الطويلة
  6-(long) = 8 bytes للأعداد الصحيحة الطويلة
  7-(FILE*) = ?? للملفات

مكتبات السي:
  1-(stdio.h)
    (functions):
      1-(printf("text %الرمز الدال على نوع المتغير المراد طباعته", name of varibal اسم النتغير المراد طباعته);) للطباعة
        لطباعة متغير نكتب:
        %i or %d (int and long)
        %c (char)
        %s (string)(char*)
        %f (float and double)
        %b (bool)
        تكتب بين علامات التنصيص و يكتب اسم المتغير بعد علامات التنصيص قبل الأقواس بعد وضع فاصلة
      2-(scanf("%الرمز الدال على نوع المتغير المراد استقباله", name of varibal اسم النتغير المراد حفظ القيمة فيه);) للإستقبال من المستخدم
        لإستقبال متغير من المستخدم نكتب:
        %i or %d (int and long)
        %c (char)
        %s (string)(char*)
        %f (float and double)
        %b (bool)
        تكتب بين علامات التنصيص و يكتب اسم المتغير بعد علامات التنصيص قبل الأقواس بعد وضع فاصلة
         // لأن المتغير حينها مؤشر والمؤشر هنا يؤشر على لا شيئ وهذا سيؤدي إلى خطأ ولحل هذه المشكلة هناك عدة طرق منها (string) أو (char*) ملاحظة: لا يمكن إستقبال قيمة لمتغير من نوع :
            1- وحجز مكان في الذاكرة يدويا (malloc) استخدام الدالة
            2- استخدام مصفوفة فالمصفوفة تقوم بحجز مكان في الذاكرة تلقائيا
      3-(fopen("name of file اسم الملف مع امتداده","mood رمز الأمر المراد فعله");) لفتح وإنشاء ملف
      4-(fprintf(name of file,"%الرمز الدال على نوع المتغير المراد طباعته", varibal اسم المتغير المراد طباعته في الملف);) للطباعة في الملف
      5-(fclose(name of file اسم الملف);) لإغلاق الملف في الذاكرة العشوائية وحفظه في القرص
  3-(string.h)
    (functions):
      1-(strlen(string varibal);) (string) لحساب طول
      2-(strcmp(string varibal1, string varibal2);) (string) للمقارنة بين متغيرين من النوع
  4-(strings.h)
    (functions):
      1-(strcpy((string varibal1) السلسلة التي ستحفظ النسخة,(string varibal2)السلسلة المراد نسخها); لنسخ سلسلة أحرف
  5-(ctype.h)
    (functions):
      1-(islower(string varibal);) لتحقق مما إذا كان الحرف صفيرا
      2-(isupper(string varibal);) لتحقق مما إذا كان الحرف كبيرا
      3-(tolower(string varibal);) لتحويل الأحرف إلى أحرف صفيرة
      4-(toupper(string varibal);) لتحويل الأحرف إلى أحرف كبيرة
  6-(stdlib.h)
    (functions):
      1-(malloc(number حجم الفراغات المراد);) لتفريغ(تخصيص) الذاكرة ديناميكيا
      // ملاحظة :
        .قبل التشفيل (/.) لمعرفة إذا كان هنالك موقع من الذاكرة غير محرر (terminal) في الـ (valgrind) يمكن استخدام الكلمة
      2-(free(string varibal السلسلة التي تم تخزين عناصرها يدويا);) لتحريح الذاكرة المخصصة ديناميكيا
  7-(math.h)
    (functions):
  8-(time.h)
    (functions):

(mathematical operators) العمليات الحسابية:
  1-(+) للجمع
  2-(++) لزيادة (1)
  3-(+=) للزيادة على القيمة
  4-(-) للطرح
  5-(--) لطرح (1)
  6-(-=) للطرح على القيمة
  7-(*) للضرب
  8-(*=) للضرب على القيمة
  9-(/) للقسمة
  10-(/=) للقسمة على القيمة

(conditional sentence) الجملة الشرطية:
  (if(conditional الشرط){الأمر} else if(conditional الشرط){الأمر} else{الأمر})
(logic operators) العمليات المنطقية :
  ((&&) and و (||) or أو (==) equal equal? هل يساوي (!=) not equal? هل لا يساوي (<) younger than أصغر من (>) bigger than أكبر من (<= || =<) smaller and equal أصغر و يساوي(>= || =>) bigger and equal أكبر و يساوي)

(loops sentence) الجمل الدورانية:
  1-(while(الشرط){الأمر}) تقوم بفحص الشرط ثم العمل
  2-(do{الأمر}while(الشرط)) تعمل مرة واحدة ثم تفحص الشرط
  3-(for(المتغير و يمكن عدم وضعه؛ الشرط؛ تغير قيمة المتغير){الأمر}) تقوم بفحص الشرط ثم العمل

(functions) الدوال:
    أنواع الدوال:
      مرجعة                                                     غير مرجعة
     ترجع قيمة                                                  لا ترجع قيمة
       أنواعها                                                       أنواعها
                                                                 1-(int)
                                                                 2-(float)
                                                                 3-(double)
      (void)                                                     4-(long)
                                                                 5-(bool)
                                                                 6-(char)
  (main) الدالة الرئيسية:
    هي الدالة المسؤولة عن عمل البرنامج ويقرأ المترجم ما يوجد داخل هذه الدالة فقط
    ملحقات الدوال:

(arrays) المصفوفات :
  ((نوع المصفوفة) (اسم المصفوفة) [حجم المصفوفة] = {قيم المصفوفة})
  حالات المصفوفات :
    1-يمكن تحديد حجم المصفوفة و إعطائها قيم لاحقا
    2-يمكن عدم تحديد حجم المصفوفة مع شرط إعطائها القيم مباشرة

(struct) الهياكل :
  و يمكن أن يكون النوع الجديد فيه نوعين أساسين...(char) أو مثل ال(int) تستخدم الهياكل لإنشاء (نوع متغير) أي مثل ال
  (struct) أشكال ال :
    1-(struct (اسم النوع الجديد){معلمومات النوع الجديد};)
      لإنشاء متغير من النوع الجديد و إعطاءه قيم في هذه الحالة نقوم بكتابة :
      struct (اسم النوع الجديد) (اسم المتغير);
      (اسم المتغير).(إحدى المعلومات(النوع الأساسي)) = (القيمة);
    2-(typedef struct{معلمومات النوع الجديد}(اسم النوع الجديد);)
      لإنشاء متغير من النوع الجديد و إعطاءه قيم في هذه الحالة نقوم بكتابة :
      (اسم النوع الجديد) (اسم المتغير);
      (اسم المتغير).(إحدى المعلومات(النوع الأساسي)) = (القيمة);

(pointer) المؤشرات :
  من أهم استخدامات المؤشرات هي أنها تعرفنا مكان المتغير في الذاكرة
  لكشف موقع المتغير في الذاكرة كناك طريقتين :
    1-printf("%p", &(اسم المتغير));
    2-(نوع البيانات)(اسم المتغير) = (قيمة المتغير);
      (نفس نوع البيانات الذي سوف يؤشر عليه المؤشر)(*اسم المؤشر(المتغير))=&(اسم المتغير الذي سوف يؤشر على موقعه); or (نفس نوع البيانات الذي سوف يؤشر عليه المؤشر*)(اسم المؤشر(المتغير))=&(اسم المتغير الذي سوف يؤشر على موقعه);
      printf("&p", (اسم المؤشر));
  وباستخدام المؤشر أصبح هناك ثلاث طرق لاستدعاء القيمة وهن على الشكل التالي :
    1-printf("%(اختصار نوع البيانات المراد طباعته)",(اسم المتغير));
    2-(نوع البيانات)(اسم المتغير) = (قيمة المتغير);
       (نفس نوع البيانات الذي سوف يؤشر عليه المؤشر*)(اسم المؤشر(المتغير))=&(اسم المتغير الذي سوف يؤشر على موقعه);
       printf("%(اختصار نوع البيانات المراد طباعته)",*(اسم المؤشر));
        // ملاحظة :
         .عند وضع نجمة (*) بعد نوع بيانات تعتبر النجمة جزء من نوع البيانات وتوضع قبل عنوان لتبين القيمة التي بداخل هذا العنوان عند الطباعة
    3-printf("%(اختصار نوع البيانات المراد طباعته)", *&(اسم المتغير)); // الملاحظة التي في السطر السابق تفسر ما حدث
  // ملاحظة :
    .المصفوفات هي مؤشرات تؤشر على أول عنصر من المصفوفة
  باستخدام الملاحظة السابقة يمكنا طباعة مصفوفة بطريقة مختلفة وهذا الأمر ينطبق على كل أنواع المصفوفات والطريقة هي كالتالي :
    printf("%(اختصار نوع البيانات المراد طباعته)", *(اسم المصفوفة)); // الملاحظة القبل السابقة تفسر ما حدث باعتبار أن المصفوفة هي مؤشر
    printf("%(اختصار نوع البيانات المراد طباعته)", *((اسم المصفوفة+1))); ...

(Fils) الملفات :
  يمكننا التعامل مع الملفات بطرق منوعة ومختلفة كالقراءة والكتابة والآن سنعرف كيف نتعمل مع الملفات :
  1- (scv-txt-c-cpp-html....)يجب إنشاء الملف وللملفات امتدادات عدة منها
  2- والآن سنشرح وظيفة كل رمز (r,w,a...)والرموز التي تستقبلها هذه الدالة كثيرة منها (fopen()) فتح الملف عن طرق الدالة
    -(r) => (read) وهي لقراءة الملف فقط فهي لا تحذف المحتوى الموجود في الملف سابقا ولا تنشئ الملف إذا لم يكن موجود
    -(w) => (write) وهي للكتابة على الملف فقط ولكنها تحذف المحتوى الموجود في الملف سابقا وهي تنشئ الملف ما لم يكن موجودا
    -(a) => (appond) وهي للكتابة على الملف فقط ولكنها لا تحذف المحتوى الموجود في الملف سابقا وهي تنشئ الملف ما لم يكن موجودا
    mood رمز الأمر  |  delete the describtion حذف المحتوى   |  creat the file إنشاء الملف إذا لم يكن موجود
      r => read                no                                      no
      w => write               yes                                     yes
      a => appond              no                                      yes
  3- (fprintf()) وللكتابة في الملف لا يكفي إعطاء الرمز وإنما يجب كتابة الدالة
  4- من أجل حذف الملف من الذاكرة العشوائية وإغلاقه وحفظه في القرص (fclose) عند الانتهاء من الملف يجب استخدام الدالة
*/
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
typedef char* string;

void dataType();
void mathOperators();
void coditionLoop();
bool conditional();
bool loop();
void file();

int main(){

  dataType();
  mathOperators();
  coditionLoop();
  conditional();
  loop();
  file();

}

bool conditional(){

  int num = 1;
  int number = 5;

  if(num != number){
    printf("obs, they're not equal\n");
    return false;
  }
  else{
    printf("yes, they're equal\n");
    return true;
  }

}

void dataType(){
  string name = "Ahmed";
  int age = 18;
  double resultNumber = 88.5;
  char resultCharactor = 'A';
  bool accessful = true;
  long yourNumber = 23809;

  printf("your name: %s\t| your age: %i\t| your result by number: %f\t| your result by charactor: %c\t| accessful: %o\t| your number: %i\n", name, age, resultNumber, resultCharactor, accessful, yourNumber);

}

void mathOperators(){
  int plus, minus, beating, division;

  plus = 100 + 5;
  minus = 100 - 10;
  beating = 100 * 5;
  division = 100 / 10;

  printf("number: %i\t| number + 5: %i\t| number - 10: %i\t| number * 5: %i\t| number / 10: %i\n", 100, plus, minus, beating, division);

}

void coditionLoop(){
  int var = 0;
  do{
    for(int i = 1; i < 10; i++){
      if(var < i){
        printf("i: %i\t", i);
        i =- 2;
      }
      else if(var > i){
        printf("var: %i\t", var);
        var++;
        i++;
      }
      else{
        printf("\n");
        return;
      }
    }
  }while(var > 0 && var < 100);
}

typedef struct{

  string name;
  string number;

}ss;

bool loop(){

  ss people[2];
  people[0].name = "ahmed";
  people[0].number = "123456";

  people[1].name = "ali";
  people[1].number = "098745";

  for(int i = 0; i < 2; i++){
    if(strcmp(people[i].name, "ali") == 0){
      printf("Found %s", people[i].number);
      return 0;
    }
  }
  printf("Not found");
  return 1;

}

void file(){

  FILE* file = fopen("file.scv", "w");
  char* message = "Hello I'm AbdUlrhman I now write program by (C) language";
  fprintf(file, "%s\n", message);
  fclose(file);

}

// ليس مهم
void checkfile(int argc, char* argv[]){

  if(argc != 2){
    printf("this more than one input\n");
    return 1;
  }
  FILE* file = fopen(argv[1], "r");
  if(file == NULL){
    printf("I'm not found!\n");
    return 1;
  }
  //(unsigned) لجعل قيم البايت موجبة كلها
  unsigned char bytes[3];
  //(fread(varibl المتغير الذي سيتم حفظ القيم فيه, bytes number عدد البايت المراد حفظه في الدورة الواحدة, loop عدد الدورات المراد, name of file اسم الملف المراد فحصه);) 
  fread(bytes, 1, 3, file);
  if(bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff){
    printf("yes\n");
  }
  else{
    printf("no\n");
  }
  fclose(file);

}
