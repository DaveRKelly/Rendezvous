#import "FacebookSignUpForm.h"

@implementation FacebookSignUpForm

- (NSArray *)fields
{
    return @[
             @"username",
             @"phone",
             
             @{FXFormFieldTitle: @"Submit", FXFormFieldHeader: @"", FXFormFieldAction: @"submitFacebookSignUpForm:"},
             
             ];
}

@end
