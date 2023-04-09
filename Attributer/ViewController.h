//
//  ViewController.h
//  Attributer
//
//  Created by Tiwari, Kanchan Kumar (Cognizant) on 09/06/21.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextView *body;
@property (weak, nonatomic) IBOutlet UILabel *header;
- (IBAction)changeBodySelectionColorToMatchBackgroundButton:(UIButton *)sender;

- (IBAction)OutlineBodySelection:(id)sender;

- (IBAction)UnOutLineBodySelection:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *outlineButton;
@end

