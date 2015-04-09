//
//  SecondViewController.swift
//  UXSample
//
//  Created by David Tseng on 3/19/15.
//  Copyright (c) 2015 Neverworker. All rights reserved.
//

import UIKit
import UXFramework

class SecondViewController: UIViewController {

    @IBAction func btnStopClicked(sender: AnyObject) {
        UXTestingManager.sharedInstance.stop()
    }
    @IBAction func btnStartClicked(sender: AnyObject) {
        UXTestingManager.sharedInstance.start()
    }
    @IBAction func btnBackClicked(sender: AnyObject) {
        
        self.navigationController?.popToRootViewControllerAnimated(true)
    }
}
