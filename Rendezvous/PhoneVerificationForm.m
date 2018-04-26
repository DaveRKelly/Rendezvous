#import "PhoneVerificationForm.h"

@implementation PhoneVerificationForm

- (NSArray *)fields
{
    return @[
             @"verificationCode",
             
             @{FXFormFieldTitle: @"Submit", FXFormFieldHeader: @"", FXFormFieldAction: @"submitPhoneVerificationForm:"},
             
             ];
}

@end
