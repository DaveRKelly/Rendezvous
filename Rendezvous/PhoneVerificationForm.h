#import <Foundation/Foundation.h>
#import "FXForms/FXForms.h"

@interface PhoneVerificationForm : NSObject <FXForm>

@property (nonatomic, copy) NSString *verificationCode;

@end
