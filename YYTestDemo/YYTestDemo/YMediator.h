//
//  YMediator.h
//  YMediator
//
//  Created by xuguangyao on 2018/4/20.
//  Copyright © 2018年 com.haqi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YMediator : NSObject

+ (instancetype)sharedInstance;

// 远程App调用入口
- (id)performActionWithUrl:(NSURL *)url completion:(void(^)(NSDictionary *info))completion;
// 本地组件调用入口
- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params shouldCacheTarget:(BOOL)shouldCacheTarget;

- (void)releaseCachedTargetWithTargetName:(NSString *)targetName;

@end
