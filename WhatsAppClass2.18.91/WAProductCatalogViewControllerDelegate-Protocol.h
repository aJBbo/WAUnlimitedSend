//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIImage, WAProductCatalogViewController, WAProductDescriptor;

@protocol WAProductCatalogViewControllerDelegate
- (void)productCatalogViewController:(WAProductCatalogViewController *)arg1 forwardProductDescriptor:(WAProductDescriptor *)arg2 image:(UIImage *)arg3;
- (void)productCatalogViewController:(WAProductCatalogViewController *)arg1 openChatWithJID:(NSString *)arg2 productDescriptor:(WAProductDescriptor *)arg3 image:(UIImage *)arg4;
@end

