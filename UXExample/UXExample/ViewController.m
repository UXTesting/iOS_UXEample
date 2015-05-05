//
//  ViewController.m
//  UXExample
//
//  Created by David Tseng on 5/5/15.
//  Copyright (c) 2015 neverworker. All rights reserved.
//

#import "ViewController.h"
#import <UXFramework/UXFramework.h>

@interface ViewController () <CruiserNavigationDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    UITextField *addressField = [[UITextField alloc] initWithFrame:CGRectMake(10, 11, 355, 25)];
    addressField.delegate                  = self;
    addressField.borderStyle               = UITextBorderStyleRoundedRect;
    addressField.backgroundColor           = UIColor.whiteColor;
    addressField.textAlignment             = NSTextAlignmentCenter;
    addressField.returnKeyType             = UIReturnKeyGo;
    addressField.keyboardType              = UIKeyboardTypeWebSearch;
    addressField.clearButtonMode           = UITextFieldViewModeWhileEditing;
    addressField.rightViewMode             = UITextFieldViewModeUnlessEditing;
    addressField.leftViewMode              = UITextFieldViewModeAlways;
    addressField.autocapitalizationType    = UITextAutocapitalizationTypeNone;
    addressField.autocorrectionType        = UITextAutocorrectionTypeNo;
    addressField.adjustsFontSizeToFitWidth = YES;
    addressField.minimumFontSize           = 6.f;
    self.navigationItem.titleView = addressField;
    self.addressField = addressField;
    [self loadURL:[NSURL URLWithString:@"http://yahoo.com.tw"]];
     
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];

    // Example of custom event.
    [[UXTestingManager sharedInstance] customEvent:@"Receive memory warning"];
}

@end
