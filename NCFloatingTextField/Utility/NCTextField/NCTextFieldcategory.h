//
//  NCTextFieldcategory.h
//  NCFloatingTextField
//
//  Created by Nishant on 04/08/17.
//  Copyright © 2017 Systematix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NCTextFieldcategory : UITextField
{
    UIView *bottomLineView;
    BOOL showingError;
}
/*
 * Change the Bottom line color. Default is Black Color.
 */
@property (nonatomic,strong) IBInspectable UIColor *lineColor;
/*
 * Change the Placeholder text color. Default is Light Gray Color.
 */
@property (nonatomic,strong) IBInspectable UIColor *placeHolderColor;
/*
 * Change the Placeholder text color when selected. Default is [UIColor colorWithRed:19/256.0 green:141/256.0 blue:117/256.0 alpha:1.0].
 */
@property (nonatomic,strong) IBInspectable UIColor *selectedPlaceHolderColor;
/*
 * Change the bottom line color when selected. Default is [UIColor colorWithRed:19/256.0 green:141/256.0 blue:117/256.0 alpha:1.0].
 */
@property (nonatomic,strong) IBInspectable UIColor *selectedLineColor;
/*
 * Change the error label text color. Default is Red Color.
 */
@property (nonatomic,strong) IBInspectable UIColor *errorTextColor;
/*
 * Change the error line color. Default is Red Color.
 */
@property (nonatomic,strong) IBInspectable UIColor *errorLineColor;
/*
 * Change the error display text.
 */
@property (nonatomic,strong) IBInspectable  NSString  *errorText;
/*
 * Shake line when showing error?.
 */
@property (assign) IBInspectable  BOOL disableShakeWithError;


@property (nonatomic,strong) UILabel *labelPlaceholder;
@property (nonatomic,strong) UILabel *labelErrorPlaceholder;


@property (assign) IBInspectable  BOOL disableFloatingLabel;

@property (nonatomic,strong) IBInspectable UIImage *leftimage;


-(instancetype)init;
-(instancetype)initWithFrame:(CGRect)frame;

-(void)showError;
-(void)showErrorWithText:(NSString *)errorText;
-(void)updateTextField:(CGRect)frame;

@end
