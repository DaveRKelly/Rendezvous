#import <Foundation/Foundation.h>
#import "FXForms/FXForms.h"

@interface LoginForm : NSObject <FXForm>


@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *password;

@end
