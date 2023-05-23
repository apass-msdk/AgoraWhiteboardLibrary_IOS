//
//  DimensionClient.h
//  AgoraMeetingUILibrary
//
//  Created by yaodanliang on 2023/5/17.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DimensionClientDelegate <NSObject>
@optional
- (void)onInitializeCallback:(int)code message:(NSString *)message;

@end

@interface DimensionClient : NSObject

+ (instancetype)sharedInstance;
/**
 *  初始化传参
 *  @param uri                      域名
 *  @param ticket               用户一次性可用ticket
 *  @param userId               用户Id
 *  @param appId                 appId
 */
- (int)initWithUri:(NSString *)uri
            ticket:(NSString *)ticket
            userId:(NSString *)userId
             appid:(NSString *)appId
          delegate:(id<DimensionClientDelegate>)delegate;


/**
 *  开启共享白板
 */
- (void)startDimension;
/**
 *  标注是否已关闭
 */
- (bool)isClosed;

/**
 *  绑定共享流视图，将表女生添加为到共享流视图上
 *  @param view  标注视图将会绑定在这个view上
 *  @param bid    会议号
 */
- (int)bindView:(UIView  *)view bid:(NSString *)bid;

/**
 *  移除标注视图
 */
- (void)removeView;

/**
 *  更新共享流宽高
 *  @param width 共享流宽度
 *  @param height 共享流高度
 */
- (void)updateWidth:(float)width height:(float)height;

/**
 *  销毁/释放共享白板
 */
- (void)destroy;

@end

NS_ASSUME_NONNULL_END
