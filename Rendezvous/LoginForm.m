#import "LoginForm.h"

@implementation LoginForm

- (NSArray *)fields
{
    return @[
             @"username",
             @"password",
             
             @{FXFormFieldTitle: @"Submit", FXFormFieldHeader: @"", FXFormFieldAction: @"submitLoginForm:"},
             
             ];
}

@end
