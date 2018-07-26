//
//  XhanceSDK.h
//  XhanceSDK
//
//  Created by steve on 2018/4/12.
//  Copyright © 2018 Adrealm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XhanceSDKVersion.h"
#import "XhanceDeeplinkModel.h"

@interface XhanceSDK : NSObject

#pragma mark - init

+ (void)initWithDevKey:(NSString *)devKey
             publicKey:(NSString *)publicKey
              trackUrl:(NSString *)trackUrl
             channelId:(NSString *)channelId
                 appId:(NSString *)appId;

#pragma mark - Deeplink

+ (void)getDeeplink:(void (^)(XhanceDeeplinkModel *deeplinkModel))completionBlock;

#pragma mark - IAP

+ (void)appStoreWithProductPrice:(NSNumber *)productPrice
             productCurrencyCode:(NSString *)productCurrencyCode
               receiptDataString:(NSString *)receiptDataString
                          pubkey:(NSString *)pubkey
                          params:(NSDictionary *)params;

+ (void)thirdPayWithProductPrice:(NSNumber *)productPrice
             productCurrencyCode:(NSString *)productCurrencyCode
               productIdentifier:(NSString *)productIdentifier
                 productCategory:(NSString *)productCategory;

@end
