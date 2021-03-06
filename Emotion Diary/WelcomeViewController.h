//
//  WelcomeViewController.h
//  Emotion Diary
//
//  Created by 范志康 on 16/4/9.
//  Copyright © 2016年 范志康. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WelcomeViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    UIImage *selfie;
    int emotion;
    BOOL shouldStopAnimate;
    BOOL hasUnkocked;
    BOOL hasShownGuide;
}

@property (strong, nonatomic) IBOutlet UIButton *buttonUnlock;
@property (strong, nonatomic) IBOutlet UILabel *labelHint;
@property (strong, nonatomic) IBOutlet UIButton *buttonRecord;
@property (strong, nonatomic) IBOutlet UIButton *buttonProceed;
@property BOOL shouldDismissAfterUnlock;

+ (void)showRookieWarningInViewController:(UIViewController *)vc;

@end
