//
//  ViewController.swift
//  UXSample
//
//  Created by David Tseng on 3/18/15.
//  Copyright (c) 2015 Neverworker. All rights reserved.
//

import UIKit

class ViewController: UIViewController,UITableViewDataSource,UITableViewDelegate {

    @IBOutlet weak var tableView: UITableView!
    
    private let kTableHeaderHeight:CGFloat = 300
    var headerView:UIView!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        //tableView.setTranslatesAutoresizingMaskIntoConstraints(false)
        tableView.dataSource = self
        tableView.delegate = self
        tableView.rowHeight = UITableViewAutomaticDimension
        
        headerView = tableView.tableHeaderView
        tableView.tableHeaderView = nil
        
        tableView.addSubview(headerView)
        
        tableView.contentInset = UIEdgeInsets(top: kTableHeaderHeight, left: 0, bottom: 0, right: 0)
        tableView.contentOffset = CGPoint(x: 0, y: -kTableHeaderHeight)
        updateHeaderView()
    }
    override func viewWillAppear(animated: Bool) {
        tableView.reloadData()
    }
    
    func updateHeaderView(){
        
        //Header
        var headerRect = CGRect(x: 0, y: -kTableHeaderHeight, width: tableView.bounds.width, height: kTableHeaderHeight)
        if tableView.contentOffset.y < -kTableHeaderHeight {
            headerRect.origin.y = tableView.contentOffset.y
            headerRect.size.height  = -tableView.contentOffset.y
        }
        headerView.frame = headerRect
    }
    

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    
    func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        
        return 2
    }
    
    func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
        
        var cell:ItemCell = ItemCell()
        
        if indexPath.row == 0{
            cell = tableView.dequeueReusableCellWithIdentifier("Cell", forIndexPath: indexPath) as ItemCell
            //cell.backgroundColor=UIColor(white: 0.2, alpha: 1.0)
            cell.lbDescription.text = "Do you want to start recording?"
            
            
        }

        else if indexPath.row == 1{
            cell = tableView.dequeueReusableCellWithIdentifier("CellTwo", forIndexPath: indexPath) as ItemCell
            
            //cell.backgroundColor=UIColor(white: 0.2, alpha: 1.0)
            cell.lbDescription.text = "Playing with UI controls"
            
            
        }
        
        return cell
    }
    
    func tableView(tableView: UITableView, didSelectRowAtIndexPath indexPath: NSIndexPath) {
        
        
        println("Start")
        //UXTestingManager.sharedInstance.start()
        
    }
    
    func scrollViewDidScroll(scrollView: UIScrollView) {
        
        updateHeaderView()
    }


}

