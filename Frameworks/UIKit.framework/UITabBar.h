/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UITabBarDelegate>, NSArray, NSMutableArray, UIColor, UIImage, UIImageView, UITabBarItem, UIView;

@interface UITabBar : UIView <_UIShadowedView> {
    struct { 
        unsigned int alertShown : 1; 
        unsigned int wasEnabled : 1; 
        unsigned int customized : 1; 
        unsigned int downButtonSentAction : 1; 
        unsigned int isLocked : 1; 
        unsigned int backgroundIsPattern : 1; 
    id _appearanceStorage;
    UIView *_backgroundView;
    NSArray *_buttonItems;
    NSArray *_customizationItems;
    UIView *_customizeView;
    <UITabBarDelegate> *_delegate;
    NSMutableArray *_dividerImageViews;
    BOOL _dividerImagesAreInvalid;
    BOOL _dividerImagesChangeWithSelection;
    struct __CFArray { } *_hiddenItems;
    float _interTabButtonSpacing;
    NSArray *_items;
    float _nextSelectionSlideDuration;
    UITabBarItem *_selectedItem;
    UIImageView *_shadowView;
    } _tabBarFlags;
    float _tabButtonWidth;
}

@property(setter=_setBackgroundView:,retain) UIView * _backgroundView;
@property(setter=_setDividerImageViews:,retain) NSMutableArray * _dividerImageViews;
@property(setter=_setDividerImagesAreInvalid:) BOOL _dividerImagesAreInvalid;
@property(setter=_setDividerImagesChangeWithSelection:) BOOL _dividerImagesChangeWithSelection;
@property(setter=_setInterTabButtonSpacing:) float _interTabButtonSpacing;
@property(setter=_setNextSelectionSlideDuration:) float _nextSelectionSlideDuration;
@property(setter=_setTabButtonWidth:) float _tabButtonWidth;
@property(retain) UIImage * backgroundImage;
@property <UITabBarDelegate> * delegate;
@property(copy) NSArray * items;
@property(retain) UIColor * selectedImageTintColor;
@property UITabBarItem * selectedItem;
@property(retain) UIImage * selectionIndicatorImage;
@property(retain) UIImage * shadowImage;
@property(retain) UIColor * tintColor;

+ (float)_buttonGap;
+ (float)defaultHeightForBarSize:(int)arg1;

- (void)_activityViewControllerIsAppearing:(id)arg1;
- (void)_activityViewControllerIsDisappearing:(id)arg1;
- (void)_adjustButtonSelection:(id)arg1;
- (void)_alertDidHide;
- (void)_alertWillShow:(BOOL)arg1 duration:(float)arg2;
- (void)_animateSelectionChangeFromView:(id)arg1 toView:(id)arg2 duration:(float)arg3;
- (id)_appearanceStorage;
- (float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (id)_backgroundView;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (BOOL)_canDrawContent;
- (void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 dragging:(BOOL)arg3 swapping:(BOOL)arg4;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_customizeDoneButtonAction:(id)arg1;
- (void)_customizeWithAvailableItems:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_dismissCustomizeSheet:(BOOL)arg1;
- (id)_dividerImageForLeftButtonState:(unsigned int)arg1 rightButtonState:(unsigned int)arg2;
- (id)_dividerImageViews;
- (BOOL)_dividerImagesAreInvalid;
- (BOOL)_dividerImagesChangeWithSelection;
- (void)_finishCustomizeAnimation:(id)arg1;
- (void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (void)_hideItemsAnimated:(BOOL)arg1;
- (float)_interTabButtonSpacing;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_invalidateDividerImages;
- (BOOL)_isHidden:(id)arg1;
- (float)_nextSelectionSlideDuration;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionTabBarButtons:(id)arg1 ignoringItem:(id)arg2;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setBackgroundImage:(id)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned int)arg2 rightButtonState:(unsigned int)arg3;
- (void)_setDividerImageViews:(id)arg1;
- (void)_setDividerImagesAreInvalid:(BOOL)arg1;
- (void)_setDividerImagesChangeWithSelection:(BOOL)arg1;
- (void)_setInterTabButtonSpacing:(float)arg1;
- (void)_setLabelFont:(id)arg1;
- (void)_setLabelShadowColor:(id)arg1;
- (void)_setLabelShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)_setNextSelectionSlideDuration:(float)arg1;
- (void)_setSelectionIndicatorImage:(id)arg1;
- (void)_setTabButtonWidth:(float)arg1;
- (id)_shadowView;
- (void)_showItemsAnimated:(BOOL)arg1;
- (BOOL)_subclassImplementsDrawRect;
- (void)_tabBarFinishedAnimating;
- (float)_tabButtonWidth;
- (id)_topmostDividerImageView;
- (void)_updateAppearanceCustomizationIfNecessaryForItem:(id)arg1;
- (void)_updateBackgroundImage;
- (void)_updateDividerImagesIfNecessary;
- (void)_updateTintedImages:(id)arg1 selected:(BOOL)arg2;
- (void)addConstraint:(id)arg1;
- (id)backgroundImage;
- (void)beginCustomizingItems:(id)arg1;
- (id)buttonItems;
- (void)dealloc;
- (id)delegate;
- (void)dismissCustomizeSheet:(BOOL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)endCustomizingAnimated:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isCustomizing;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isLocked;
- (id)items;
- (void)layoutSubviews;
- (void)removeConstraint:(id)arg1;
- (id)selectedImageTintColor;
- (id)selectedItem;
- (id)selectionIndicatorImage;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBadgeAnimated:(BOOL)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setButtonItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)setItems:(id)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setSelectedImageTintColor:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)setSelectionIndicatorImage:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (id)shadowImage;
- (void)showActionSheet:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tintColor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
