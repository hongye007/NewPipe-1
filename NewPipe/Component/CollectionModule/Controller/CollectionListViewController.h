//
//  CollectionListViewController.h
//  NewPipe
//
//  Created by Somiya on 2018/12/11.
//  Copyright © 2018 Somiya. All rights reserved.
//

#import "BaseViewController.h"

@interface CollectionListViewController : BaseViewController
@property (nonatomic, copy) NSArray *dataSource;
@property (nonatomic, copy) NSString *url;

@end
