//
//  RecordTableViewController.h
//  Emotion Diary
//
//  Created by 范志康 on 16/4/9.
//  Copyright © 2016年 范志康. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UzysAssetsPickerController.h"

#define NO_EMOTION -1

@interface RecordTableViewController : UITableViewController <UITextViewDelegate, UzysAssetsPickerControllerDelegate> {
    NSDictionary *faceInfo;
    NSMutableArray *images;
}

@property (strong, nonatomic) IBOutlet UIImageView *imageSelfie;
@property (strong, nonatomic) IBOutlet UIImageView *imageSelfieBlurred;
@property (strong, nonatomic) IBOutlet UIButton *buttonFace;
@property (strong, nonatomic) IBOutlet UISlider *sliderEmotion;
@property (strong, nonatomic) IBOutlet UILabel *placeholder;
@property (strong, nonatomic) IBOutlet UITextView *textRecord;
@property (strong, nonatomic) IBOutlet UICollectionView *collectionImages;

@property UIImage *selfie;
@property int emotion;

@end
