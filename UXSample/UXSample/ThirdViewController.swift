//
//  ThirdViewController.swift
//  UXSample
//
//  Created by David Tseng on 3/19/15.
//  Copyright (c) 2015 Neverworker. All rights reserved.
//

import UIKit

class ThirdViewController: UIViewController {

    
    override func viewDidLoad() {
        
        super.viewDidLoad()
        self.navigationController?.navigationBarHidden=false
    }
    
    override func viewWillDisappear(animated: Bool) {
        self.navigationController?.navigationBarHidden=true
    }
}
