//
//  ViewController.m
//  NCFloatingTextField
//
//  Created by Nishant on 04/08/17.
//  Copyright © 2017 Systematix. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (BOOL)textFieldShouldReturn:(UITextField *)textField // this method get called when you tap "Go"
{
    [textField resignFirstResponder];
    return YES;
}

@end
