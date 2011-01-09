/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */



@interface SURotationImageModifier : SUImageModifier 
{
    float _degrees;
    NSInteger _orientation;
}

@property NSInteger orientation;
@property float degrees;


- (float)degrees;
- (void)setDegrees:(float)arg1;
- (void)drawBeforeImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { float x1; float x2; })arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageFrameForImage:(id)arg1 currentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { float x1; float x2; })arg3;
- (void)setOrientation:(NSInteger)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSInteger)orientation;

@end