//
//  DimensionClient.h
//  AgoraMeetingUILibrary
//
//  Created by yaodanliang on 2023/5/17.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DimensionClient : NSObject

+ (instancetype)sharedInstance;
/**
 *  初始化传参
 *  @param uri                      域名
 *  @param bid                      会议号
 *  @param ticket               用户一次性可用ticket
 *  @param uid                      用户Id
 */
- (int)initWithUri:(NSString *)uri
                bid:(NSString *)bid
              ticket:(NSString *)ticket
             userId:(NSString *)uid;


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
 */
- (int)bindView:(UIView  *)view;

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
