#import <Foundation/Foundation.h>
#import "FXForms/FXForms.h"

@interface FacebookSignUpForm : NSObject <FXForm>

@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *phone;

@end
