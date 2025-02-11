//
//  ChangeInfoModel.h
//  YDLSHOPPING
//
//  Created by mac on 2019/10/29.
//  Copyright © 2019 sunjiayu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


typedef void(^ChangeInfoModelSuccessBlock)(NSString *code,NSString* message ,id data);
typedef void(^ChangeInfoModelFaiulureBlock)(NSError *error);
@interface ChangeInfoModel : NSObject
@property(nonatomic,copy )NSString *country;
@property(nonatomic,copy )NSString *address_id;
@property(nonatomic,copy )NSString *state;
@property(nonatomic,copy )NSString *shipping_method;

@property(nonatomic,strong)ChangeInfoModel *data;
@property(nonatomic,strong)ChangeInfoModel *cart_info;
@property(nonatomic,copy )NSString *base_coupon_cost;
@property(nonatomic,copy )NSString *base_grand_total;
@property(nonatomic,copy )NSString *base_product_total;
@property(nonatomic,copy )NSString *base_shipping_cost;
@property(nonatomic,copy )NSString *cart_id;
@property(nonatomic,copy )NSString *coupon_code;
@property(nonatomic,copy )NSString *coupon_cost;
@property(nonatomic,copy )NSString *grand_total;
@property(nonatomic,copy )NSString *items_count;
@property(nonatomic,copy )NSString *payment_method;
@property(nonatomic,copy )NSString *product_total;
@property(nonatomic,copy )NSString *product_volume;
@property(nonatomic,copy )NSString *product_volume_weight;
@property(nonatomic,copy )NSString *product_weight;
@property(nonatomic,strong)NSArray *products;
@property(nonatomic,copy )NSString *active;
@property(nonatomic,copy )NSString *base_product_price;
@property(nonatomic,copy )NSString *base_product_row_price;
@property(nonatomic,strong)NSArray *custom_option;

@property(nonatomic,strong)ChangeInfoModel *custom_option_info;
@property(nonatomic,copy )NSString *size;
@property(nonatomic,copy )NSString *custom_option_sku;
@property(nonatomic,copy )NSString *imgUrl;
@property(nonatomic,copy )NSString *item_id;
@property(nonatomic,copy )NSString *name;
@property(nonatomic,copy )NSString *product_id;
@property(nonatomic,strong)ChangeInfoModel *product_image;
@property(nonatomic,strong)NSArray *gallery;
@property(nonatomic,copy )NSString *image ;
@property(nonatomic,copy )NSString *image_ifshowdetail;
@property(nonatomic,copy )NSString *image_ifshowindesc;
@property(nonatomic,copy )NSString *image_imgdesc;
@property(nonatomic,copy )NSString *imgstorageurl;
@property(nonatomic,copy )NSString *is_detail;
@property(nonatomic,copy )NSString *is_thumbnails;
@property(nonatomic,copy )NSString *label ;
@property(nonatomic,copy )NSString *sort_order;

@property(nonatomic,strong)ChangeInfoModel *main;

//@property(nonatomic,copy)NSString *image;
//@property(nonatomic,copy)NSString *image_ifshowdetail;
//@property(nonatomic,copy)NSString *image_ifshowindesc;
//@property(nonatomic,copy)NSString *image_imgdesc;
//@property(nonatomic,copy)NSString *imgstorageurl ;
//@property(nonatomic,copy)NSString *is_detail;
//@property(nonatomic,copy)NSString *is_thumbnails;
//@property(nonatomic,copy)NSString *label ;
//@property(nonatomic,copy)NSString *sort_order;

@property(nonatomic,strong)ChangeInfoModel *product_name;

@property(nonatomic,copy)NSString *name_de;
@property(nonatomic,copy)NSString *name_en;
@property(nonatomic,copy)NSString *name_es;
@property(nonatomic,copy)NSString *name_fr;
@property(nonatomic,copy)NSString *name_pt;
@property(nonatomic,copy)NSString *name_ru;
@property(nonatomic,copy)NSString *name_zh;

@property(nonatomic,copy)NSString *product_price;
@property(nonatomic,copy)NSString *product_row_price;
@property(nonatomic,copy)NSString *product_row_volume;
@property(nonatomic,copy)NSString *product_row_volume_weight;
@property(nonatomic,copy)NSString *product_row_weight;
@property(nonatomic,copy)NSString *product_url;
//@property(nonatomic,copy)NSString *product_volume;
//@property(nonatomic,copy)NSString *product_volume_weight;
//@property(nonatomic,copy)NSString *product_weight;
@property(nonatomic,copy)NSString *qty ;
@property(nonatomic,copy)NSString *sku ;
@property(nonatomic,strong)ChangeInfoModel *spu_options;
//@property(nonatomic,copy)NSString *size ;


@property(nonatomic,copy)NSString *shipping_cost;

//@property(nonatomic,copy)NSString *store;
//@property(nonatomic,copy)NSString *country;

//@property(nonatomic,strong)ChangeInfoModel *countryArr;
//@property(nonatomic,strong)ChangeInfoModel *currency_info;
//@property(nonatomic,copy)NSString *code;
//@property(nonatomic,copy)NSString *rate ;
//@property(nonatomic,copy)NSString *symbol ;
//@property(nonatomic,copy)NSString *current_payment_method;
//@property(nonatomic,copy)NSString *current_shipping_method;
//@property(nonatomic,copy)NSString *isGuest;


//@property(nonatomic,strong)OrderInfoModel *payments;
//@property(nonatomic,strong)OrderInfoModel *alipay_standard;
//@property(nonatomic,copy)NSString *imageUrl ;
////@property(nonatomic,copy)NSString *label;
//@property(nonatomic,copy)NSString *supplement;
//@property(nonatomic,strong)OrderInfoModel *check_money;
//@property(nonatomic,copy)NSString *checked;
//@property(nonatomic,strong)OrderInfoModel *paypal_standard;
@property(nonatomic,strong)NSArray *shippings;

@property(nonatomic,copy)NSString *checked ;
@property(nonatomic,copy)NSString *cost ;
//@property(nonatomic,copy)NSString *label;
@property(nonatomic,copy)NSString *method;
//@property(nonatomic,copy)NSString *name;
@property(nonatomic,copy)NSString *shipping_i;
//@property(nonatomic,copy)NSString *symbol ;




-(void)ChangeInfoModelSuccess:(ChangeInfoModelSuccessBlock)success andFailure:(ChangeInfoModelFaiulureBlock)failure;
@end

NS_ASSUME_NONNULL_END
