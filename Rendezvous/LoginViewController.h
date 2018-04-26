#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>
#import "GAITrackedViewController.h"

@interface LoginViewController : GAITrackedViewController <FBLoginViewDelegate>

@property (nonatomic) BOOL isFirstLoginDone;

// to configure permissions for facebook login:
@property (weak, nonatomic) IBOutlet FBLoginView *loginView;
@property (strong, nonatomic) IBOutlet UIButton *signUpButton;
@property (strong, nonatomic) IBOutlet UIButton *loginButton;
@property (strong, nonatomic) IBOutlet FBLoginView *fbLoginView;

- (IBAction)signUpAction:(id)sender;
- (IBAction)loginAction:(id)sender;

@end
