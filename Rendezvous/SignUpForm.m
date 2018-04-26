#import "SignUpForm.h"

@implementation SignUpForm

- (NSArray *)fields
{
    return @[
             @"firstName",
             @"lastName",
             @"username",
             @"password",
             // @"email",
             @"phone",
             
             @{FXFormFieldTitle: @"Submit", FXFormFieldHeader: @"", FXFormFieldAction: @"submitSignUpForm:"},
             
             ];
}

@end
