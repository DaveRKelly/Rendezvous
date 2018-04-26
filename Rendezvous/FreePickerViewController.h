#import <UIKit/UIKit.h>
#import <APAvatarImageView/APAvatarImageView.h>
#import "GAITrackedViewController.h"

@interface FreePickerViewController : GAITrackedViewController

@property (strong, nonatomic) IBOutlet UIButton *browseButton;
@property (strong, nonatomic) IBOutlet UIButton *eatPickButton;
@property (strong, nonatomic) IBOutlet UIButton *hangoutPickButton;
@property (strong, nonatomic) IBOutlet UIButton *moviePickButton;
@property (strong, nonatomic) IBOutlet UIButton *studyPickButton;
@property (strong, nonatomic) IBOutlet UIButton *logoutButton;
@property (strong, nonatomic) IBOutlet APAvatarImageView *profilePicture;

- (IBAction)browseButtonPress:(id)sender;
- (IBAction)eatPickButtonPress:(id)sender;
- (IBAction)hangoutPickButtonPress:(id)sender;
- (IBAction)moviePickButtonPress:(id)sender;
- (IBAction)studyPickButtonPress:(id)sender;
- (IBAction)logoutButtonPress:(id)sender;


@end
