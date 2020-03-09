//
//  BuyHttpRequestManager.h
//  12306_Test
//
//  Created by 曹巍 on 2020/3/5.
//  Copyright © 2020 louis. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

typedef void (^SuccessBlock)(NSDictionary *data);

typedef void (^FailureBlock)(NSError *error);

@interface BuyHttpRequestManager : NSObject

@property (nonatomic, copy) SuccessBlock successBlock;

@property (nonatomic, copy) FailureBlock failureBlock;

+(BuyHttpRequestManager *)shaerd;

-(void)RequestWithUrl:(NSString *)url  parameters:(id)parameters Success:(SuccessBlock)successBlock failure:(FailureBlock)failureBlock;

-(void)RequestGetPassengerDTOsWithUrl:(NSString *)url  parameters:(id)parameters Success:(SuccessBlock)successBlock failure:(FailureBlock)failureBlock;

@end

NS_ASSUME_NONNULL_END