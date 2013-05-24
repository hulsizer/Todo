//
//  CLMTodoItem.h
//  Todo
//
//  Created by Andrew Hulsizer on 5/23/13.
//  Copyright (c) 2013 Andrew Hulsizer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CLMTodoItem : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, assign) BOOL checked;
@end