//
//  ViewController.h
//  Kidsi_ipad_App
//
//  Created by Ashok on 11/18/14.
//  Copyright (c) 2014 MDC Concepts. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextFieldDelegate>
@property(weak,nonatomic)IBOutlet UITextField *userNameTextField;
@property(nonatomic,weak)IBOutlet UITextField *passwordTextField;
@property (weak, nonatomic) IBOutlet UIImageView *imageViewForVehicle;
- (IBAction)login:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *imageForStudentLogo;
@property (weak, nonatomic) IBOutlet UIImageView *imageViewForParent;


@end
