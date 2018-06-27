//
//  APIResponseProtocol.h
//  
//
//  Created by qinzhongzeng on 2017/9/7.
//  Copyright © 2017年 Triangle. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol APIResponseProtocol <NSObject>

@optional;
/// 响应成功后的处理
- (void)apiResponseSuccess:(id<APIRequestProtocol>)request;

@end
