//
//  ViewController.h
//  PayPal Manual
//
//  Created by LI Leonel G. Pérez Ramos on 03/01/16.
//  Copyright © 2016 LI Leonel G. Pérez Ramos. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PaypalMobile.h"

@interface Start : UIViewController<PayPalPaymentDelegate>

- (IBAction)btnPayPressed:(id)sender;

@end

