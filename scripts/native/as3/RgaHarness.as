package
{
   // 原生引擎的辅助函数：照搬 rg_sim.make_game 载入后的处理、rg_timeline 的两个「全部购买」。
   public class RgaHarness
   {
      // make_game：PlayFab.season = 存档里的活动编号（或指定值）；清缓存；建皇家贸易令表
      public static function afterLoad(param1:§8G§, param2:*) : void
      {
         var _loc1_:* = undefined;
         var _loc2_:* = undefined;
         PlayFab.season = param2 === undefined ? param1.§^4§ : param2;
         param1.§ R§();
         _loc1_ = §7!1§.§2!6§;
         for each(_loc2_ in §8G§.§-!4§)
         {
            if(_loc2_ is §;E§ && _loc2_.§-!^§ != -1)
            {
               _loc1_[_loc2_.§-!^§] = _loc2_;
            }
         }
      }
      
      public static function ticks(param1:§8G§, param2:int) : void
      {
         var _loc1_:int = 0;
         while(_loc1_ < param2)
         {
            param1.§-!R§(1);
            _loc1_++;
         }
      }

      // rg_timeline._BUY_ALL_UPGRADES（BuyAll 升级「全部购买」按钮，去掉界面调用），返回 [买到的升级, 皇家贸易令次数]
      public static function buyAllUpgrades() : Array
      {
         var _loc8_:§`6§ = null;
         var _loc2_:§`6§ = null;
         var _loc3_:String = "BuyAll";
         var _loc7_:* = 0;
         var _loc4_:* = 0;
         var _loc9_:Array = [];
         var _loc5_:int = §8G§.§>!K§;
         §8G§.§>!K§ = §?v§.§#!S§;
         var _loc6_:int = 0;
         try
         {
            _loc6_ = 0;
            while(_loc6_ < §8G§.§-!4§.length)
            {
               _loc8_ = §8G§.§-!4§[_loc6_];
               if(!(!_loc8_.§<!7§ && (_loc8_.id == §@"J§.id || _loc8_.id == §7"9§.id || _loc8_.id == §?"J§.id || _loc8_.id == §["J§.id || _loc8_.id == §]"L§.id || _loc8_.id == §5"-§.id || _loc8_.id == § !2§.id || _loc8_.id == §5&§.id || _loc8_.§7"0§ || _loc8_.§?!=§ == "RubyUpgrade") && §8G§.§4P§[29] != 1))
               {
                  if(!(_loc8_.§<!7§ || !_loc8_.§3e§ || _loc8_.§,!B§ == -1))
                  {
                     if(!(_loc8_.§@1§ != "" && _loc8_.§@1§ == _loc3_))
                     {
                        if(!§8G§.§>!a§.§6M§(_loc8_,true))
                        {
                           _loc3_ = _loc8_.§@1§;
                        }
                        else
                        {
                           _loc7_++;
                           _loc9_.push(_loc8_);
                        }
                     }
                  }
               }
               _loc6_++;
            }
            if(§8G§.§-!^§ != -1)
            {
               _loc6_ = 0;
               while(_loc6_ < §8G§.§-!4§.length)
               {
                  _loc2_ = §8G§.§-!4§[_loc6_];
                  if(_loc2_ is §;E§ && _loc2_.§-!^§ != -1 && §8G§.§4P§[21] == 1)
                  {
                     if(!((_loc2_.§-!^§ == 10 || _loc2_.§-!^§ == 9) && !§&c§.§'!_§()))
                     {
                        if(§8G§.§>!a§.§;T§(_loc2_,true,true))
                        {
                           _loc4_ = _loc4_ + §8G§.§>!a§.§`@§;
                        }
                     }
                  }
                  _loc6_++;
               }
            }
         }
         finally
         {
            §8G§.§>!K§ = _loc5_;
         }
         §8G§.§>!a§.§ R§();
         return [_loc9_,_loc4_];
      }

      // rg_timeline.Timeline.buy_all_buildings（BuildingPanel.buyAll）：金币按可见建筑平分；param1 = 按「买最大」
      public static function buyAllBuildings(param1:Boolean) : Object
      {
         var _loc1_:Array = [];
         var _loc2_:* = undefined;
         var _loc3_:Object = {};
         var _loc4_:* = undefined;
         var _loc5_:* = undefined;
         var _loc7_:* = undefined;
         for each(_loc2_ in §8G§.§%<§)
         {
            if(_loc2_.§-6§)
            {
               _loc1_.push(_loc2_);
            }
         }
         if(_loc1_.length == 0)
         {
            return _loc3_;
         }
         _loc4_ = §8G§.§@e§ / _loc1_.length;
         _loc5_ = §8G§.§[!M§;
         if(param1)
         {
            §8G§.§[!M§ = §2!C§.§#!S§;
         }
         try
         {
            for each(_loc2_ in _loc1_)
            {
               _loc7_ = _loc2_.§!a§;
               §8G§.§>!a§.§ u§(_loc2_,false,false,false,_loc4_);
               if(_loc2_.§!a§ != _loc7_)
               {
                  _loc3_[_loc2_.§1i§] = _loc2_.§!a§ - _loc7_;
               }
            }
         }
         finally
         {
            §8G§.§[!M§ = _loc5_;
         }
         return _loc3_;
      }
   }
}
